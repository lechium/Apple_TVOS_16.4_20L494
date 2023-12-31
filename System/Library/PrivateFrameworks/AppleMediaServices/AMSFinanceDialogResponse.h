//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSDialogRequest, AMSURLTaskInfo, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface AMSFinanceDialogResponse : NSObject
{
    _Bool _containsCommerceUIURL;	// 8 = 0x8
    NSDictionary *_dialogDictionary;	// 16 = 0x10
    AMSDialogRequest *_dialogRequest;	// 24 = 0x18
    long long _kind;	// 32 = 0x20
    NSDictionary *_responseDictionary;	// 40 = 0x28
    AMSURLTaskInfo *_taskInfo;	// 48 = 0x30
}

+ (_Bool)_shouldSendOverIDS:(id)arg1 taskInfo:(id)arg2;	// IMP=0x001000000022b2de
+ (id)_serviceActionFromButton:(id)arg1 taskInfo:(id)arg2;	// IMP=0x001000000022ac5c
+ (id)_presentIDSDialog:(id)arg1 taskInfo:(id)arg2;	// IMP=0x001000000022abf6
+ (id)_presentDialog:(id)arg1 taskInfo:(id)arg2;	// IMP=0x001000000022a279
+ (id)_handleAskPermissionRequestWithURL:(id)arg1 account:(id)arg2;	// IMP=0x0010000000229c69
+ (_Bool)_credentialSource:(unsigned long long)arg1 satisfiesAuthenticationType:(unsigned long long)arg2;	// IMP=0x0010000000229c48
+ (id)performFinanceDialog:(id)arg1 taskInfo:(id)arg2;	// IMP=0x0010000000227c10
+ (id)handleDialogResult:(id)arg1 taskInfo:(id)arg2;	// IMP=0x0010000000227678
+ (long long)dialogKindForTaskInfo:(id)arg1 withResponseDictionary:(id)arg2;	// IMP=0x0010000000227203
- (void).cxx_destruct;	// IMP=0x000000000022b330
@property(copy, nonatomic) AMSURLTaskInfo *taskInfo; // @synthesize taskInfo=_taskInfo;
@property(readonly, copy, nonatomic) NSDictionary *responseDictionary; // @synthesize responseDictionary=_responseDictionary;
@property(nonatomic) long long kind; // @synthesize kind=_kind;
@property(readonly, nonatomic) _Bool containsCommerceUIURL; // @synthesize containsCommerceUIURL=_containsCommerceUIURL;
@property(readonly, copy, nonatomic) NSDictionary *dialogDictionary; // @synthesize dialogDictionary=_dialogDictionary;
- (_Bool)_isCommerceUIURL:(id)arg1 actionType:(long long)arg2 URLType:(long long)arg3;	// IMP=0x0000000000229ff5
- (id)_createRequestButtonsFromDialogDictionary:(id)arg1;	// IMP=0x00000000002295e2
- (id)_enrichedMetricsDictionaryWithFinanceDictionary:(id)arg1;	// IMP=0x00000000002294aa
- (id)_createDialogRequest;	// IMP=0x0000000000228ef0
- (id)_createActionFromButtonDictionary:(id)arg1 title:(id)arg2;	// IMP=0x0000000000228517
- (long long)_actionTypeFromButtonDictionary:(id)arg1;	// IMP=0x00000000002282cb
- (id)performWithTaskInfo:(id)arg1;	// IMP=0x000000000022823e
@property(readonly, nonatomic) AMSDialogRequest *dialogRequest; // @synthesize dialogRequest=_dialogRequest;
- (id)initWithResponseDictionary:(id)arg1 kind:(long long)arg2 taskInfo:(id)arg3;	// IMP=0x0000000000226f77

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

