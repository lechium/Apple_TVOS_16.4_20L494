//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleMediaServices/AMSMetricsEvent.h>

@class NSString;

@interface AMSMetricsEvent (IMAdditions)
+ (id)im_defaultTopicForEvents;	// IMP=0x002000000004a199
+ (id)im_eventWithTopic:(id)arg1 eventType:(id)arg2;	// IMP=0x002000000004a10c
+ (id)im_eventWithDefaultTopicAndEventType:(id)arg1;	// IMP=0x002000000004a0a6
+ (id)im_pageEventWithDefaultTopic;	// IMP=0x002000000004a08d
+ (id)im_clickEventWithDefaultTopic;	// IMP=0x002000000004a074
+ (id)im_eventWithDefaultTopic;	// IMP=0x0020000000049f8d
- (void)im_setProperty:(id)arg1 forBodyKey:(id)arg2;	// IMP=0x0010000000010640
- (void)im_addPropertiesWithDictionary:(id)arg1;	// IMP=0x00100000000105f1
- (id)shortDescription;	// IMP=0x001000000004a300
@property(retain, nonatomic, setter=im_setToken:) NSString *im_token;
@property(retain, nonatomic, setter=im_setContentIdentifier:) id im_contentIdentifier;
@property(retain, nonatomic, setter=im_setName:) NSString *im_name;
@end

