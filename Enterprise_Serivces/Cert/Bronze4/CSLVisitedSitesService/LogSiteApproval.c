LogSiteApproval()
{
	lr_start_transaction("VisitedSiteService_LogSiteApproval");

	web_service_call( "StepName=LogSiteApproval_101",
		"SOAPMethod=VisitedSiteService|BasicHttpBinding_IVisitedSiteService|LogSiteApproval",
		"ResponseParam=response",
		"Service=VisitedSiteService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484172696.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<AlwaysAllow>false</AlwaysAllow>"
				"<OpenIDClaimedIdentifier>abcde</OpenIDClaimedIdentifier>"
				"<Realm>0d979c3f-e848-4856-8ce7-f45d1722d9b1</Realm>"
				"<UpdateUrl nil=\"true\"></UpdateUrl>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("VisitedSiteService_LogSiteApproval", LR_AUTO);
	
	return 0;
}
