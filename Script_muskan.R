#!/usr/bin/Rscript

name <- "Vinay Joshi"
email <- "viyj2000@gmail.com"
slackUsername <- "@Vinyjoshi"
biostack <- "Fill Here"
twitter <- "@vinyjoshi"

a = unlist(strsplit(slackUsername, ""))
b = unlist(strsplit(twitter, ""))

distance <- sum(a != b)


my_details <- c(name, email, slackUsername, biostack,twitter,distance)
  
cat(paste(my_details, collapse = ','))
