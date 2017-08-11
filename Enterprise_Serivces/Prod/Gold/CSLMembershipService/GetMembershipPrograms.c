GetMembershipPrograms()
{
	lr_start_transaction("MembershipService_GetMembershipPrograms");

	web_service_call( "StepName=GetMembershipPrograms_101",
		"SOAPMethod=MembershipService|BasicHttpBinding_IMembershipService|GetMembershipPrograms",
		"ResponseParam=response",
		"Service=MembershipService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484947343.inf",
		BEGIN_ARGUMENTS,
		"VendorIdSpecified=false",
		"xml:MachineName="
			"<MachineName>"
				"<Text>"
					"<string>test</string>"
				"</Text>"
			"</MachineName>",
		"xml:CorrelationID="
			"<CorrelationID>"
				"<Text>"
					"<string>2857FD96-E40F-4096-A55B-F088C11353CF</string>"
				"</Text>"
			"</CorrelationID>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("MembershipService_GetMembershipPrograms", LR_AUTO);

	return 0;
}
