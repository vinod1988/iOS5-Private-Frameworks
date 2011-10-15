/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iLifeSlideshow/MCObject.h>

@class MCAudioPlaylist, MCPlug, NSLock, NSMutableSet, NSSet;

@interface MCContainer : MCObject
{
    MCAudioPlaylist *mAudioPlaylist;
    NSMutableSet *mReferencingPlugs;
    NSLock *mReferencingPlugsLock;
    int mSpecialRetainCount;
}

- (id)init;
- (id)initWithImprint:(id)arg1 andMontage:(id)arg2;
- (void)demolish;
- (id)imprint;
@property(readonly) MCAudioPlaylist *audioPlaylistCreateIfNeeded;
@property(readonly) NSSet *referencingPlugs; // @synthesize referencingPlugs=mReferencingPlugs;
@property(readonly) unsigned int numberOfReferencingPlugs;
@property(readonly) MCPlug *superplug;
- (void)referenceByPlug:(id)arg1;
- (void)unreferenceByPlug:(id)arg1;
- (id)specialRetain;
- (void)specialRelease;
@property(readonly) MCAudioPlaylist *audioPlaylist; // @synthesize audioPlaylist=mAudioPlaylist;

@end
