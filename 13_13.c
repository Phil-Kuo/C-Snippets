#include <stdio.h>

void build_index_url(const char *domain, char *index_url);

void
build_index_url(const char *domain, char *index_url)
{
	prefix = "http://www.";
	suffix = "/index.html";
	
	strcpy(index_url, prefix);
	strcat(index_url, domain);
	strcat(index_url, suffix);
}
