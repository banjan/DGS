GetVersion()
{
	lr_start_transaction("LoyaltyService_GetVersion");

	web_service_call( "StepName=GetVersion_102",
		"SOAPMethod=LoyaltyService|BasicHttpBinding_LoyaltyService|GetVersion",
		"ResponseParam=response",
		"Service=LoyaltyService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484857784.inf",
		BEGIN_ARGUMENTS,
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("LoyaltyService_GetVersion", LR_AUTO);

	return 0;
}
