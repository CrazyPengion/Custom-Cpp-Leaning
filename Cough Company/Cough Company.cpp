/*
This is a learning project, which is supposed to recreate Plauge Inc. in it's main idea.
I believe it is a great project, as it combines randomness, purchases of modifications,
	different continents with different stats (how the virus can arrive / healthcare level
	/ etc, while having not set start (can pick starting location and upgrade path).
This project is supposed to be console only, as I'm trying to learn basics of C++ such as
	loops / functions / possibly multi file coding, which will become secondary if I spend
	days trying to figure out the UI.
Population stats are from 25.06.2026, at unrounded 8,301,003,950 people (Worldometer).
In game there will be a total population of 8.3 billion.
The population density is not pop/area, but also looks at where most people live. This means
	Mongolia with lots of area but most people in a few cities will have a very high density.
	Density baseline is Europe with 1.
*/

/*
PLANNING:

1. REGIONS ---------------------------
"Regions" are parts of the map with different (de)buffs and accessibility.
Continents will not be geographical ones, but rather regions important to differintiate:

Name                      | Healthcare      | Population    | Density | Climate
--------------------------|-----------------|---------------|---------|----------
(EU) Europe               | Very High (0.6) | 745,000,000   | 1.00    | Normal
(US) North America        | High      (0.8) | 610,000,000   | 0.50    | Normal
(SAM) South America       | Moderate  (1)   | 445,000,000   | 0.80    | Hot
(CHI) China               | High      (0.8) | 1,420,000,000 | 2.80    | Normal
(SEA) South East Asia     | Moderate  (1)   | 700,000,000   | 2.50    | Hot
(MEA) Middle East         | Moderate  (1)   | 520,000,000   | 1.50    | Very Hot
(NAF) Africa (North)      | Moderate  (1)   | 265,000,000   | 1.40    | Hot
(SOF) Sub Saharan Africa  | Very Low  (1.5) | 1,600,000,000 | 1.20    | Hot
(OCE) Oceania             | High      (0.8) | 44,940,000    | 0.25    | Hot
(RAJ) India/Neighbors     | Low       (1.2) | 1,950,000,000 | 5.50    | Hot
(GRE) Greenland           | High      (0.8) | 60,000        | 0.01    | Very Cold

Amount of new infected = 
A * I * D * H
A: Amount of infected in region
I: Infectivity = depends on upgrades
D: Density = Density level from the table above * amount of population left (1-0)
H: Healthcare = Healthcare level from the table above * Medicine Resistance (H * Mr)
	Mr starts at 1, can be upgraded to 0.5 and then 0 (or .66 / .33 / 0)
*/

int main()
{
	//selectCountry()
	/*
	mainLoop
	{
		update(regions, virus_stats)
	}
	
	*/

	return 0;
}

NEEDED STUFF:
1) LOOP
2) STRUCT
3) REPEAT LISTS