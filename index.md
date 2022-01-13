# Hbin's Technical Side
## 1.Programming 
This site is used for all usefull programing notes.
for example 

```C++

# Singleton template

class Job 
{
	private:
		//private contructor 
		Job() {};
	public: 
		~Job() {};
		static inline Job* get_instanace()
		{
			static Job* p_Job = nullptr;
			if (p_Job == nullptr)
			{
				p_Job = new Job();
			}
			return p_Job;
		}
		
		void do_something(); 
		void do_someotherthing();
}

[Smart Pointer](CPP/STD/SmartPointer/smart_pointer.md)

```

## 2. Technical Note
This site is used for all usefull techinal notes.
for example
```sh
#Git rebase; 
git checkout <feature_branch>
git rebase -i origin/master
```


