GetVisitedSites()
{
	lr_start_transaction("VisitedSiteService_GetVisitedSites");

	web_service_call( "StepName=GetVisitedSites_102",
		"SOAPMethod=VisitedSiteService|BasicHttpBinding_IVisitedSiteService|GetVisitedSites",
		"ResponseParam=response",
		"Service=VisitedSiteService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484172027.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<OpenIDClaimedIdentifier>0d419b11-b77d-4fbc-8085-44c288617712</OpenIDClaimedIdentifier>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("VisitedSiteService_GetVisitedSites", LR_AUTO);

	return 0;
}
