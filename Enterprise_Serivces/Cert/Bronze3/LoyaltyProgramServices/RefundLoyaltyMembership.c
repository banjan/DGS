RefundLoyaltyMembership()
{
	lr_start_transaction("LoyaltyMembershipService_RefundLoyaltyMembership");

	web_service_call( "StepName=RefundLoyaltyMembership_101",
		"SOAPMethod=LoyaltyMembershipService|BasicHttpBinding_ILoyaltyMembershipService|RefundLoyaltyMembership",
		"ResponseParam=response",
		"Service=LoyaltyMembershipService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1499711112.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request nil=\"true\"></request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("LoyaltyMembershipService_RefundLoyaltyMembership", LR_AUTO);

	return 0;
}
