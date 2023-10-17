//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class DMDConfigurationOrganization, DMFReportingRequirements, NSString, NSXPCListenerEndpoint;

@interface DMDConfigurationSource : NSManagedObject
{
}

@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSString *organizationIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(copy, nonatomic) NSString *displayName; // @dynamic displayName;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSXPCListenerEndpoint *listenerEndpoint; // @dynamic listenerEndpoint;
@property(copy, nonatomic) NSString *machServiceName; // @dynamic machServiceName;
@property(retain, nonatomic) DMDConfigurationOrganization *organization; // @dynamic organization;
@property(retain, nonatomic) DMFReportingRequirements *reportingRequirements; // @dynamic reportingRequirements;
@property(readonly) Class superclass;

@end

