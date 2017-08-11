ChangeClientByClientKey()
{
	lr_start_transaction("ClientService_ChangeClientByClientKey");

		web_service_call( "StepName=ChangeClientByClientKey_101",
		"SOAPMethod=ClientService|BasicHttpBinding_IClientService|ChangeClientByClientKey",
		"ResponseParam=response",
		"Service=ClientService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1482426222.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<CallbackUrl>http://test.com</CallbackUrl>"
				"<ClientKey>[ClientKey]</ClientKey>"
				"<Name>abc123</Name>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);
	
	lr_end_transaction("ClientService_ChangeClientByClientKey", LR_AUTO);
		
	return 0;
}
