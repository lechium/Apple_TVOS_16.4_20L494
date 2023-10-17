//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosGraph/NSCopying-Protocol.h>
#import <PhotosGraph/NSObject-Protocol.h>

@class NSDictionary, NSSet;

@protocol KGElement <NSObject, NSCopying>
@property(readonly, copy, nonatomic) NSDictionary *properties;
@property(readonly, copy, nonatomic) NSSet *labels;
@property(readonly, nonatomic) unsigned long long identifier;
- (void)resolveIdentifier:(unsigned long long)arg1;
@end

