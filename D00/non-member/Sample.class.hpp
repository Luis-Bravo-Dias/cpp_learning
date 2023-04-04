#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample
{
	public:

		Sample(void);
		~Sample(void);

		static int	getNbInst(void); //non member

	private:
		static int	_nbInst; //non member
};

#endif