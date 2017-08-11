IsServiceHealthy()
{
	lr_start_transaction("LoyaltyService_IsServiceHealthy");

	web_service_call( "StepName=IsServiceHealthy_103",
		"SOAPMethod=LoyaltyService|BasicHttpBinding_LoyaltyService|IsServiceHealthy",
		"ResponseParam=response",
		"Service=LoyaltyService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484857892.inf",
		BEGIN_ARGUMENTS,
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("LoyaltyService_IsServiceHealthy", LR_AUTO);

	return 0;
}
