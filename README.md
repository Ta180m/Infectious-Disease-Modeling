# Infectious-Disease-Modeling

A project to model infectious diseases with the SIR model and variations.

![](https://raw.githubusercontent.com/Ta180m/Infectious-Disease-Modeling/master/SARS-ESIR.png)

![](https://raw.githubusercontent.com/Ta180m/Infectious-Disease-Modeling/master/COVID-19-ESIR.png)

## Usage

For SARS in Hong Kong use  
`./solver2.py --country=Hong_Kong --popcountry=20000 --initial=1000 --disease=SARS --start=4/10/03 --mode={SIR,Linear,ESIR,SEIR}`

For COVID-19 in the US use  
`./solver2.py --popcountry=3000000 --initial=100 --mode={SIR,Linear,ESIR,SEIR}`

```
usage: solver2.py [-h] [--mode {SIR,Linear,ESIR,SEIR}]
                  [--data [{Actual,S,I,R,E} [{Actual,S,I,R,E} ...]]]
                  [--folder FOLDER] [--disease DISEASE] [--out OUT]
                  [--start START] [--end END] [--incubation INCUBATION_PERIOD]
                  [--predict PREDICTION_RANGE] [--country COUNTRY]
                  [--popcountry POPCOUNTRY] [--popmodel POPMODEL]
                  [--initial INITIAL]

optional arguments:
  -h, --help            show this help message and exit
  --mode {SIR,Linear,ESIR,SEIR}, -m {SIR,Linear,ESIR,SEIR}
                        change the mode of the model (SIR, Linear, ESIR,
                        SEIR); default: SIR
  --data [{Actual,S,I,R,E} [{Actual,S,I,R,E} ...]], -d [{Actual,S,I,R,E} [{Actual,S,I,R,E} ...]]
                        change the type of data to present in the graph
                        (Actual, S, I, R, E); default: Actual S I R
  --folder FOLDER, -f FOLDER
                        the folder in which to find the data files; defaults
                        to looking in the data folder
  --disease DISEASE, -D DISEASE
                        the disease to model; defaults to COVID-19
  --out OUT, -o OUT     the name of the graph and csv files; defaults to the
                        name of the disease
  --start START, -s START
                        the date where the data starts (defaults to the start
                        date of COVID-19 (1/22/20))
  --end END, -e END     the date where the data stops (defaults to whereever
                        the input data ends)
  --incubation INCUBATION_PERIOD, -i INCUBATION_PERIOD
                        the incubation period of the disease (only applicable
                        if using SIRE model; ignored otherwise); none by
                        default
  --predict PREDICTION_RANGE, -p PREDICTION_RANGE
                        the number of days to predict the course of the
                        disease (defaults to None, meaning the model will not
                        predict beyond the given data)
  --country COUNTRY, -c COUNTRY
                        the country that is being modeled (defaults to US)
  --popcountry POPCOUNTRY, -pc POPCOUNTRY
                        the population of the country (defaults to US
                        population)
  --popmodel POPMODEL, -pm POPMODEL
                        the population of the model (defaults to 10000)
  --initial INITIAL, -I INITIAL
                        initial infected people (defaults to 1)
```

## Credits

Original code by [JasonXu314](https://github.com/JasonXu314/covid-19-project/) and [Lewuathe](https://github.com/Lewuathe/COVID19-SIR)
