//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVServices/TVSAsynchronousOperation.h>

@class NSObject, NSString, TVTopShelfContentExtensionAttributes;
@protocol OS_dispatch_queue, TVTopShelfContent, TVTopShelfContentExtensionControlling;

__attribute__((visibility("hidden")))
@interface HBTopShelfFetchContentOperation : TVSAsynchronousOperation
{
    _Bool _fetchAttributes;	// 8 = 0x8
    _Bool _didTimeout;	// 9 = 0x9
    NSString *_fetchIdentifier;	// 16 = 0x10
    id <TVTopShelfContentExtensionControlling> _contentExtensionController;	// 24 = 0x18
    unsigned long long _fetchTimeoutInSeconds;	// 32 = 0x20
    id <TVTopShelfContent> _content;	// 40 = 0x28
    TVTopShelfContentExtensionAttributes *_attributes;	// 48 = 0x30
    NSString *_applicationIdentifier;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_processingQueue;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000006c224
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue; // @synthesize processingQueue=_processingQueue;
@property(copy, nonatomic) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
@property(nonatomic) _Bool didTimeout; // @synthesize didTimeout=_didTimeout;
@property(retain, nonatomic) TVTopShelfContentExtensionAttributes *attributes; // @synthesize attributes=_attributes;
@property(retain, nonatomic) id <TVTopShelfContent> content; // @synthesize content=_content;
@property(nonatomic) _Bool fetchAttributes; // @synthesize fetchAttributes=_fetchAttributes;
@property(nonatomic) unsigned long long fetchTimeoutInSeconds; // @synthesize fetchTimeoutInSeconds=_fetchTimeoutInSeconds;
@property(readonly, nonatomic) id <TVTopShelfContentExtensionControlling> contentExtensionController; // @synthesize contentExtensionController=_contentExtensionController;
@property(readonly, copy, nonatomic) NSString *fetchIdentifier; // @synthesize fetchIdentifier=_fetchIdentifier;
- (id)description;	// IMP=0x000000000006c009
- (void)cancel;	// IMP=0x000000000006bf1a
- (void)_executionDidBegin;	// IMP=0x000000000006b819
- (id)initWithApplicationIdentifier:(id)arg1 fetchIdentifier:(id)arg2 contentExtensionController:(id)arg3;	// IMP=0x000000000006b729

@end

