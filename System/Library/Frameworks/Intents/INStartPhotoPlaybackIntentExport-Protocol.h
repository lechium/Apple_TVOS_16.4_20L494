//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class CLPlacemark, INDateComponentsRange, NSArray, NSString;

@protocol INStartPhotoPlaybackIntentExport <NSObject, JSExport>
@property(copy, nonatomic) NSArray *peopleInPhoto;
@property(nonatomic) unsigned long long excludedAttributes;
@property(nonatomic) unsigned long long includedAttributes;
@property(copy, nonatomic) NSArray *searchTerms;
@property(copy, nonatomic) NSString *albumName;
@property(copy, nonatomic) CLPlacemark *locationCreated;
@property(copy, nonatomic) INDateComponentsRange *dateCreated;
- (id)init;
@end

