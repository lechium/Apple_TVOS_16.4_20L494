//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSData, NSString, RMManagementSource;

@interface RMDeclarationPayload : NSManagedObject
{
}

+ (id)keyPathsForValuesAffectingManagementSourceIdentifier;	// IMP=0x0020000000029d3d
- (id)reportDetails;	// IMP=0x002000000002a97c
- (void)_validateLoadStateWithErrors:(id)arg1;	// IMP=0x001000000002a844
- (short)_currentLoadState;	// IMP=0x001000000002a700
- (void)_validateSetOncePropertiesWithErrors:(id)arg1;	// IMP=0x001000000002a29a
- (void)_validateManagementSourceWithErrors:(id)arg1;	// IMP=0x001000000002a1fd
- (_Bool)validateForUpdate:(id *)arg1;	// IMP=0x0010000000029fd5
- (_Bool)validateForInsert:(id *)arg1;	// IMP=0x0010000000029dad
@property(readonly, copy, nonatomic) NSString *managementSourceIdentifier;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(copy, nonatomic) NSString *declarationType; // @dynamic declarationType;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(nonatomic) short loadState; // @dynamic loadState;
@property(retain, nonatomic) RMManagementSource *managementSource; // @dynamic managementSource;
@property(copy, nonatomic) NSData *payload; // @dynamic payload;
@property(copy, nonatomic) NSString *serverToken; // @dynamic serverToken;
@property(retain, nonatomic) id state; // @dynamic state;
@property(readonly) Class superclass;

@end
