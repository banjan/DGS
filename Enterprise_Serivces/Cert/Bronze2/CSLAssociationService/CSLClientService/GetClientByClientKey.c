GetClientByClientKey()
{
	lr_start_transaction("ClientService_GetClientByClientKey");

	web_service_call( "StepName=GetClientByClientKey_101",
		"SOAPMethod=ClientService|BasicHttpBinding_IClientService|GetClientByClientKey",
		"ResponseParam=response",
		"Service=ClientService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1482426512.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<ClientKey>[ClientKey]</ClientKey>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);
	
	lr_end_transaction("ClientService_GetClientByClientKey", LR_AUTO);

	return 0;
}
