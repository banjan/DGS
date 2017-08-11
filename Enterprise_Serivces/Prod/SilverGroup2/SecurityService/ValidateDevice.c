ValidateDevice()
{
	lr_start_transaction("SecurityService_ValidateDevice");

	web_service_call( "StepName=ValidateDevice_101",
		"SOAPMethod=SecurityService|BasicHttpBinding_ISecurityService|ValidateDevice",
		"ResponseParam=response",
		"Service=SecurityService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1487094013.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<AuthorizationToken>f2e633aa-cea9-4b65-9d4b-1cbb27ed5bcc</AuthorizationToken>"
				"<OpenIdClaimedIdentifier>/ID/091916134935357ujRr_2j00uyo7nAYb_52w</OpenIdClaimedIdentifier>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("SecurityService_ValidateDevice", LR_AUTO);

	return 0;
}
