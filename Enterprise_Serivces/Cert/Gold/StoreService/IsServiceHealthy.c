IsServiceHealthy()
{
	lr_start_transaction("StoreService_IsServiceHealthy");

	web_service_call( "StepName=IsServiceHealthy_102",
		"SOAPMethod=StoreService|StoreService|IsServiceHealthy",
		"ResponseParam=response",
		"Service=StoreService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484887153.inf",
		BEGIN_ARGUMENTS,
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("StoreService_IsServiceHealthy", LR_AUTO);

	return 0;
}
