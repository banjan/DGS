RemoveAlwaysApproveSite()
{
	lr_start_transaction("VisitedSiteService_RemoveAlwaysApproveSite");

	web_service_call( "StepName=RemoveAlwaysApproveSite_101",
		"SOAPMethod=VisitedSiteService|BasicHttpBinding_IVisitedSiteService|RemoveAlwaysApproveSite",
		"ResponseParam=response",
		"Service=VisitedSiteService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484172969.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<OpenIDClaimedIdentifier>abcde</OpenIDClaimedIdentifier>"
				"<Realm>test</Realm>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("VisitedSiteService_RemoveAlwaysApproveSite", LR_AUTO);

	return 0;
}
