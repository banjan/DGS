GetValidDevices()
{
	lr_start_transaction("SecurityService_GetValidDevices");

	web_service_call( "StepName=GetValidDevices_101",
		"SOAPMethod=SecurityService|BasicHttpBinding_ISecurityService|GetValidDevices",
		"ResponseParam=response",
		"Service=SecurityService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1487093482.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<OpenIdClaimedIdentifier>/ID/09191613474481hAvincqn-0_2dp6SLAQhNQ</OpenIdClaimedIdentifier>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("SecurityService_GetValidDevices", LR_AUTO);

	return 0;
}
