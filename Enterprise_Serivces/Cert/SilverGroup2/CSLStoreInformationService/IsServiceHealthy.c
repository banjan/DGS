IsServiceHealthy()
{
	lr_start_transaction("StoreInformationService_IsServiceHealthy");

	web_service_call( "StepName=IsServiceHealthy_105",
		"SOAPMethod=StoreInformationService|BasicHttpBinding_IStoreInformationService|IsServiceHealthy",
		"ResponseParam=response",
		"Service=StoreInformationService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484784069.inf",
		BEGIN_ARGUMENTS,
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("StoreInformationService_IsServiceHealthy", LR_AUTO);

	return 0;
}
