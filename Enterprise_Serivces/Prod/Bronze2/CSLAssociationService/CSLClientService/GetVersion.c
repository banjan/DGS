GetVersion()
{
	lr_start_transaction("ClientService_GetVersion");

		web_service_call( "StepName=GetVersion_101",
		"SOAPMethod=ClientService|BasicHttpBinding_IClientService|GetVersion",
		"ResponseParam=response",
		"Service=ClientService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1482426600.inf",
		BEGIN_ARGUMENTS,
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);
	
	lr_end_transaction("ClientService_GetVersion", LR_AUTO);

	return 0;
}
