//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DownloadSessionProperties, NSError, NSMutableDictionary, NSString, NSURLCredential;

@interface DownloadHandlerSession : NSObject
{
    long long _activeHandlerIdentifier;	// 8 = 0x8
    NSError *_error;	// 16 = 0x10
    NSMutableDictionary *_propertyValues;	// 24 = 0x18
    long long _sessionID;	// 32 = 0x20
    DownloadSessionProperties *_sessionProperties;	// 40 = 0x28
    NSURLCredential *_urlCredential;	// 48 = 0x30
}

@property(copy, nonatomic) NSURLCredential *URLCredential; // @synthesize URLCredential=_urlCredential;
@property(readonly, nonatomic) DownloadSessionProperties *sessionProperties; // @synthesize sessionProperties=_sessionProperties;
@property(readonly, nonatomic) long long sessionID; // @synthesize sessionID=_sessionID;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) long long activeHandlerIdentifier; // @synthesize activeHandlerIdentifier=_activeHandlerIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000017dd28
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000017dcc3
- (unsigned long long)hash;	// IMP=0x001000000017dcb9
- (id)valueForSessionProperty:(id)arg1;	// IMP=0x001000000017dc92
@property(copy, nonatomic) NSString *statusDescription;
- (void)setValue:(id)arg1 forSessionProperty:(id)arg2;	// IMP=0x001000000017dc2d
@property(nonatomic) long long sessionState;
- (void)setSessionPropertyValues:(id)arg1;	// IMP=0x001000000017db63
@property(nonatomic) float percentComplete;
@property(nonatomic) _Bool needsPowerAssertion;
@property(nonatomic) _Bool canBePaused;
@property(nonatomic) _Bool blocksOtherDownloads;
- (void)dealloc;	// IMP=0x001000000017d901
- (id)initWithSessionProperties:(id)arg1;	// IMP=0x001000000017d8c6
- (id)init;	// IMP=0x001000000017d84b

@end

