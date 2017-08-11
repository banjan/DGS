IsSiteApproved()
{
	lr_start_transaction("VisitedSiteService_IsSiteApproved");

	web_service_call( "StepName=IsSiteApproved_101",
		"SOAPMethod=VisitedSiteService|BasicHttpBinding_IVisitedSiteService|IsSiteApproved",
		"ResponseParam=response",
		"Service=VisitedSiteService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484172309.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<OpenIDClaimedIdentifier>0d419b11-b77d-4fbc-8085-44c288617712</OpenIDClaimedIdentifier>"
				"<Realm>0d979c3f-e848-4856-8ce7-f45d1722d9b1</Realm>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("VisitedSiteService_IsSiteApproved", LR_AUTO);

	return 0;
}
