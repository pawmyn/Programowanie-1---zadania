#define  _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

int main()

{
	double bielskolat = 49.822280;
	double bielskolon = 19.058619;

	double czechowicelat = 49.901693;
	double czechowicelon = 18.991822;

	double oswiecimlat = 50.034952;
	double oswiecimlon = 19.210415;

	double ketylat = 49.880680;
	double ketylon = 19.222878;


	double distancebielczechosw_lat = bielskolat - czechowicelat - oswiecimlat;
	double distancebielczechosw_lon = bielskolon - czechowicelon - oswiecimlon;

	double distancebielketyosw_lat = bielskolat - ketylat - oswiecimlat;
	double distancebielketyosw_lon = bielskolon - ketylon - oswiecimlon;


	double distance_a = sqrt(pow(distancebielczechosw_lat, 2) + pow(distancebielczechosw_lon, 2));
	
	double distance_b = sqrt(pow(distancebielketyosw_lat, 2) + pow(distancebielketyosw_lon, 2));


	cout << "Odleglosc Bielsko-Czecowice-Oswiecim jest rowna " << distance_a << endl;
	cout << "Odleglosc Bielsko-Kety-Oswiecim jest rowna " << distance_b << endl;
	
	system("pause");

	return(0);
}