#include <TRandom.h>
void MonteCarlo(Int_t n){
	TRandom r;
	Int_t counter=0;
	for( Int_t i=0; i<n; i++)
	{
		Double_t x = r.Rndm();
		Double_t y = r.Rndm();
		if( x*x + y*y <=1)
		{counter++;
		}
	}
	Double_t ratio = counter/(Double_t)n;
	Double_t piestimate = ratio*4;
	cout<<piestimate<< endl;

 
	
	
}
