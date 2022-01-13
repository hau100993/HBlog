# Singleton 

## Introduce

## Code template

```c++
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


```