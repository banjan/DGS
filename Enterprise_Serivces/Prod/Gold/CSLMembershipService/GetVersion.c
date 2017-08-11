GetVersion()
{
	lr_start_transaction("MembershipService_GetVersion");

	web_service_call( "StepName=GetVersion_102",
		"SOAPMethod=MembershipService|BasicHttpBinding_IMembershipService|GetVersion",
		"ResponseParam=response",
		"Service=MembershipService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484947659.inf",
		BEGIN_ARGUMENTS,
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("MembershipService_GetVersion", LR_AUTO);

	return 0;
}
