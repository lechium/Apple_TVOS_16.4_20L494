//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSSet, NSString, NSURL;

@interface RMStatusPublisherServicePlugin : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    NSURL *_url;	// 16 = 0x10
    NSDictionary *_statusKeysByNotification;	// 24 = 0x18
    NSSet *_statusKeys;	// 32 = 0x20
}

+ (_Bool)_validPluginWithURL:(id)arg1;	// IMP=0x0020000000070e77
+ (id)loadPlugins;	// IMP=0x0010000000070aa6
- (void).cxx_destruct;	// IMP=0x00200000000719d0
@property(retain, nonatomic) NSSet *statusKeys; // @synthesize statusKeys=_statusKeys;
@property(copy, nonatomic) NSDictionary *statusKeysByNotification; // @synthesize statusKeysByNotification=_statusKeysByNotification;
@property(readonly, copy, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)_serviceConnection;	// IMP=0x00100000000718d6
- (void)publishStatusKeys:(id)arg1 storeIdentifier:(id)arg2;	// IMP=0x0010000000071664
- (id)supportedKeyPaths;	// IMP=0x0010000000071652
- (id)initWithURL:(id)arg1 identifier:(id)arg2 statusKeysByNotification:(id)arg3;	// IMP=0x00100000000712d7
- (id)initWithURL:(id)arg1;	// IMP=0x0010000000070f2d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
