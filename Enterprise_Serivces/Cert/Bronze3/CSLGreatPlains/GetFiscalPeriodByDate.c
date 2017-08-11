GetFiscalPeriodByDate()
{
	web_reg_find ("Text=FiscalYear", LAST );
	
	lr_start_transaction("GreatPlains_GetFiscalPeriodByDate");
	
	web_custom_request("Get Fiscal Period By Date",
        "URL=http://cslgreatplainsprod.gha.pvt/v1/GreatPlainsApi/FiscalPeriods?date=11/13/2015%2011:12:59%20AM", 
        "Method=GET", 
        "Resource=0", 
        "EncType=application/json", 
        "Mode=HTTP",
        LAST);
	
	lr_end_transaction("GreatPlains_GetFiscalPeriodByDate", LR_AUTO);
	
	return 0;
}
