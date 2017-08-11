SuggestedSearchProduct()
{
	lr_start_transaction("MobileChannel_SuggestedSearchProduct");
	
	web_custom_request("Suggested Search Product",
        "URL=http://mobilechannelprod.gha.pvt/product/search/suggest?q=battle", 
        "Method=GET", 
        "Resource=0", 
        "EncType=application/json", 
        "Mode=HTTP",
        LAST);
	
	lr_end_transaction("MobileChannel_SuggestedSearchProduct", LR_AUTO);
	
	return 0;
}
