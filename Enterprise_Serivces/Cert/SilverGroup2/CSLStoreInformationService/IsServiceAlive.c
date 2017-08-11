IsServiceAlive()
{
	lr_start_transaction("StoreInformationService_IsServiceAlive");

	web_service_call( "StepName=IsServiceAlive_105",
		"SOAPMethod=StoreInformationService|BasicHttpBinding_IStoreInformationService|IsServiceAlive",
		"ResponseParam=response",
		"Service=StoreInformationService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484783993.inf",
		BEGIN_ARGUMENTS,
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("StoreInformationService_IsServiceAlive", LR_AUTO);

	return 0;
}
