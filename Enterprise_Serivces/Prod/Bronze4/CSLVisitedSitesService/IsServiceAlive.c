IsServiceAlive()
{
	lr_start_transaction("VisitedSiteService_IsServiceAlive");

	web_service_call( "StepName=IsServiceAlive_104",
		"SOAPMethod=VisitedSiteService|BasicHttpBinding_IVisitedSiteService|IsServiceAlive",
		"ResponseParam=response",
		"Service=VisitedSiteService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484172188.inf",
		BEGIN_ARGUMENTS,
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("VisitedSiteService_IsServiceAlive", LR_AUTO);

	return 0;
}
