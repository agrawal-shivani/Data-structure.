class Vector{
	int cs;
	int ms;
	int *arr;
    public:
    	Vector(){
           cs=0;
           ms=1;
           arr=new int[ms];
    	}

    
    void push_back(const int d){
    	if(cs==ms){
    		//if array is full
    		int *oldArr=arr;
    		arr=new int[2*ms];
    		ms=ms*2;
    		for (int i = 0; i < cs; ++i)
    		{
    			arr[i]=oldArr[i];
    		}

    		//clear the old memory
    		delete[] oldArr;
    	}
    	arr[cs]=d;
    	cs++;
    }	

    void pop_back(){
    	cs--;
    }

    int front() const{
    	return arr[0];
    }

    int back() const{
    	return arr[cs-1];
    }
    int size() const{
    	return cs;
    }

    bool empty() const{
    	return cs==0;
    }
    int capacity() const{
    	return ms;
    }
    int at(const int i){
    	return arr[i];
    }

    int operator[](const int i){
    	return arr[i];
    }


};