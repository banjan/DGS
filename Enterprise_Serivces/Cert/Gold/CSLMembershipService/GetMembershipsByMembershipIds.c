GetMembershipsByMembershipIds()
{
	lr_start_transaction("MembershipService_GetMembershipsByGroupMembershipId");

	web_service_call( "StepName=GetMembershipsByGroupMembershipId_102",
		"SOAPMethod=MembershipService|BasicHttpBinding_IMembershipService|GetMembershipsByGroupMembershipId",
		"ResponseParam=response",
		"Service=MembershipService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1486571508.inf",
		BEGIN_ARGUMENTS,
		"GroupMembershipId=123456789",
		"GroupMembershipIdSpecified=true",
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

	lr_end_transaction("MembershipService_GetMembershipsByGroupMembershipId", LR_AUTO);

	return 0;
}
