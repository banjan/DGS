IsServiceAlive()
{
	lr_start_transaction("LoyaltyService_IsServiceAlive");

	web_service_call( "StepName=IsServiceAlive_102",
		"SOAPMethod=LoyaltyService|BasicHttpBinding_LoyaltyService|IsServiceAlive",
		"ResponseParam=response",
		"Service=LoyaltyService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484857837.inf",
		BEGIN_ARGUMENTS,
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("LoyaltyService_IsServiceAlive", LR_AUTO);

	return 0;
}
