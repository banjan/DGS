IsServiceHealthy()
{
	lr_start_transaction("VisitedSiteService_IsServiceHealthy");

	web_service_call( "StepName=IsServiceHealthy_105",
		"SOAPMethod=VisitedSiteService|BasicHttpBinding_IVisitedSiteService|IsServiceHealthy",
		"ResponseParam=response",
		"Service=VisitedSiteService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484172244.inf",
		BEGIN_ARGUMENTS,
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("VisitedSiteService_IsServiceHealthy", LR_AUTO);

	return 0;
}
