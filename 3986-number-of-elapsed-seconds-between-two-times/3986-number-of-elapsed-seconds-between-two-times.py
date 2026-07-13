class Solution(object):
    def secondsBetweenTimes(self, startTime, endTime):
        """
        :type startTime: str
        :type endTime: str
        :rtype: int
        """
        s1=startTime.split(':')
        s2=endTime.split(':')
        
        h1=int(s1[0])
        h2=int(s2[0])
        m1=int(s1[1])
        m2=int(s2[1])
        se1=int(s1[2])
        se2=int(s2[2])
        starttime=h1*3600+m1*60+se1
        end =h2*3600+m2*60+se2
        return end -starttime


        