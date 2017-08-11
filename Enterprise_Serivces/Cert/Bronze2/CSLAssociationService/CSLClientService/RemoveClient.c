RemoveClient()
{
	lr_start_transaction("ClientService_RemoveClient");

	web_service_call( "StepName=RemoveClient_101",
		"SOAPMethod=ClientService|BasicHttpBinding_IClientService|RemoveClient",
		"ResponseParam=response",
		"Service=ClientService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1482426789.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<Name>abc123</Name>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("ClientService_RemoveClient", LR_AUTO);

	return 0;
}
