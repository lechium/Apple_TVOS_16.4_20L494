//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData;

@interface ICDCloudPushNotificationAccountRegistrationState : NSObject
{
    NSData *_APNSToken;	// 8 = 0x8
    NSArray *_mediaKinds;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000ec9e4
@property(retain, nonatomic) NSArray *mediaKinds; // @synthesize mediaKinds=_mediaKinds;
@property(retain, nonatomic) NSData *APNSToken; // @synthesize APNSToken=_APNSToken;
- (id)dictionaryRepresentation;	// IMP=0x00100000000ec934
- (id)initWithDictionaryRepresentation:(id)arg1;	// IMP=0x00100000000ec891

@end

