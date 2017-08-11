CreateMembership()
{
	lr_start_transaction("LoyaltyMembershipService_CreateMembership");

	web_service_call( "StepName=CreateMembership_102",
		"SOAPMethod=MembershipService|BasicHttpBinding_IMembershipService|CreateMembership",
		"ResponseParam=response",
		"Service=MembershipService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1498237351.inf",
		BEGIN_ARGUMENTS,
		"xml:Membership="
			"<Membership nil=\"true\"></Membership>",
		"xml:MachineName="
			"<MachineName>"
				"<Text></Text>"
			"</MachineName>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("LoyaltyMembershipService_CreateMembership", LR_AUTO);

	return 0;
}
