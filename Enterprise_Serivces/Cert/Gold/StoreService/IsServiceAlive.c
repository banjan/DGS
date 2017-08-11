IsServiceAlive()
{
	lr_start_transaction("StoreService_IsServiceAlive");

	web_service_call( "StepName=IsServiceAlive_102",
		"SOAPMethod=StoreService|StoreService|IsServiceAlive",
		"ResponseParam=response",
		"Service=StoreService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484886933.inf",
		BEGIN_ARGUMENTS,
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("StoreService_IsServiceAlive", LR_AUTO);

	return 0;
}
