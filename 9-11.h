<script>
    var date=new Date();
    var hours=date.getHours();

    if (hours<5) {
        alert('잠을 자렴...');
    }  else {
        if (hours>9) {
            alert ('준비');
        } else {
            if (hours<12) {
                alert ('빈둥빈둥');
            } else {
                if (hours<14) {
                    alert ('식사')
                } else {
                    //여러 업무
                }
            }
        }
    }
</script>