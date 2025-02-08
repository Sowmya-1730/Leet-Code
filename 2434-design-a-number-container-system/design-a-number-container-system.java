class NumberContainers {

    private Map<Integer, PriorityQueue<Integer>>res;
    private Map<Integer,Integer>index_val;
    public NumberContainers() {
        res = new HashMap<>();
        index_val = new HashMap<>();
    }
    
    public void change(int index, int number) {
        if(index_val.containsKey(index))
        {
            int prev = index_val.get(index);
            if(prev==number)return;
            res.get(prev).remove(index);
        }
        res.computeIfAbsent(number,k -> new PriorityQueue<>()).offer(index);
        index_val.put(index,number);
    }
    
    public int find(int number) {
        PriorityQueue<Integer> p=res.getOrDefault(number,new PriorityQueue<>());
        while(!p.isEmpty() &&  index_val.get(p.peek())!=number)
        {
            p.poll();
        }
        return p.isEmpty() ? -1 : p.peek();
    }
}

/**
 * Your NumberContainers object will be instantiated and called as such:
 * NumberContainers obj = new NumberContainers();
 * obj.change(index,number);
 * int param_2 = obj.find(number);
 */