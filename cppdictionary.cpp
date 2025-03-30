#include <iostream>
#include <string>

using namespace std;

int main(){
	string word;
	cout << "Welcome to the Coffee Atlas! We have 30 coffee species in our database." << endl;
	cout << "Enter word (Please use '_' as space): ";
	cin >> word;
	if (word == "Coffea_arabica"){
		cout << "The most widely consumed coffee species, known for its smooth, complex flavors and lower caffeine content." << endl;
	}
	else if (word == "Coffea_canephora"){
		cout << "A hardy species with higher caffeine content, often used in espresso and instant coffee for its strong, bitter taste." << endl;
	}
	else if (word == "Coffea_liberica"){
		cout << "A species with large, irregular beans and a woody, smoky flavor, mostly grown in West Africa and Southeast Asia." << endl;
	}
	else if (word == "Coffea_excelsa"){
		cout << "A subspecies of Liberica, offering a tart, fruity profile with light body, commonly used for blending." << endl;
	}
	else if (word == "Coffea_stenophylla"){
		cout << "Known as 'highland coffee', it has a flavor comparable to Arabica but is more drought-resistant." << endl;
	}
	else if (word == "Coffea_eugenioides"){
		cout << "A wild species with low caffeine content and mild, sweet flavors; one of Arabica’s parent species." << endl;
	}
	else if (word == "Coffea_racemosa"){
		cout << "A drought-resistant species from Mozambique with small beans and a mild, tea-like taste." << endl;
	}
	else if (word == "Coffea_congensis"){
		cout << "A close relative of Robusta, native to the Congo basin, sometimes used in hybrid breeding." << endl;
	}
	else if (word == "Coffea_mauritiana"){
		cout << "A wild species native to Mauritius, not commercially grown but important for conservation." << endl;
	}
	else if (word == "Coffea_zanguebariae"){
		cout << "A rare species from East Africa with limited cultivation potential." << endl;
	}
	else if (word == "Coffea_brevipes"){
		cout << "A wild African coffee species with limited commercial value." << endl;
	}
	else if (word == "Coffea_kianjavitensis"){
		cout << "A species from Madagascar, sometimes researched for breeding purposes." << endl;
	}
	else if (word == "Coffea_mongeneti"){
		cout << "A little-known species with restricted growth areas in Africa." << endl;
	}
	else if (word == "Coffea_homellei"){
		cout << "Native to Madagascar, rarely cultivated." << endl;
	}
	else if (word == "Coffea_resinosa"){
		cout << "A wild species found in Kenya and Tanzania." << endl;
	}
	else if (word == "Coffea_sessiliflora"){
		cout << "A small coffee species with slow growth and minor commercial interest." << endl;
	}
	else if (word == "Coffea_togoensis"){
		cout << "A West African species, mostly found in the wild." << endl;
	}
	else if (word == "Coffea_wightiana"){
		cout << "A species from India, not cultivated on a large scale." << endl;
	}
	else if (word == "Coffea_myrtifolia"){
		cout << "A rare species from the Indian Ocean islands." << endl;
	}
	else if (word == "Coffea_ligustroides"){
		cout << "Native to East Africa, not widely used in cultivation." << endl;
	}
	else if (word == "Coffea_kapakata"){
		cout << "A species discovered in Angola, showing some potential for cultivation." << endl;
	}
	else if (word == "Coffea_anthonyi"){
		cout << "A wild hybrid species found in Africa." << endl;
	}
	else if (word == "Coffea_pseudozanguebariae"){
		cout << "A relative of Zanguebariae with minimal commercial use." << endl;
	}
	else if (word == "Coffea_bacilliaris"){
		cout << "A rare species from Africa, studied for its resistance traits." << endl;
	}
	else if (word == "Coffea_mayombensis"){
		cout << "Found in the Congo region, with little commercial cultivation." << endl;
	}
	else if (word == "Coffea_perrieri"){
		cout << "Native to Madagascar, with limited study and cultivation." << endl;
	}
	else if (word == "Coffea_humblotiana"){
		cout << "A species from the Comoros Islands, facing conservation concerns." << endl;
	}
	else if (word == "Coffea_mannii"){
		cout << "A rare species from West Africa with minor agricultural interest." << endl;
	}
	else if (word == "Coffea_bonnieri"){
		cout << "Native to Madagascar, with minimal agricultural use." << endl;
	}
	else if (word == "Coffea_vatovavyensis"){
		cout << "Another Madagascan species, studied for its genetics rather than for coffee production." << endl;
	}
	else{
		cout << "Exiting program";
	}
	return 0;
}