<p style="text-align:center;">
<img src="https://assets.pokemon.com/assets/cms2/img/pokedex/full/026.png" alt="drawing" width="250"/>
</p>


# Singleton

## Introduce

_to be update_

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