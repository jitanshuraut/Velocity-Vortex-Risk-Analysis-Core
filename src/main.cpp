#include "PortfolioManager.hpp"
#include <iostream>

int main()
{

    PortfolioManager portfolioManager;
    portfolioManager.Add_StockData("AAPL", {0.02, 0.01, -0.03, 0.04, 0.05});
    portfolioManager.Add_StockData("MSFT", {0.01, 0.02, 0.01, 0.03, -0.01});
    portfolioManager.Add_StockData("GOOGL", {0.03, 0.04, -0.02, 0.01, 0.02});
    portfolioManager.Add_StockData("AMZN", {0.01, -0.01, 0.02, 0.03, 0.01});

    portfolioManager.Risk_Analysis_All();
    portfolioManager.Risk_Analysis_Specific("AAPL");

    return 0;
}
